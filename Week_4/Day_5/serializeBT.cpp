class Codec {
public:
  void preorder(TreeNode*root,string &s){

    if(!root) {
     s+="N,"; 
     return;  
    } 

    s+=to_string(root->val)+",";
    preorder(root->left,s);
    preorder(root->right,s);
 
  }

  TreeNode* build(vector<string>&nodes,int &idx){

    if(nodes[idx]=="N"){
        idx++;
        return NULL;
    }

    TreeNode* root = new TreeNode(stoi(nodes[idx++]));
    root->left = build(nodes,idx);
    root->right = build(nodes,idx);

    return root;


  }

 
    string serialize(TreeNode* root) {
        string s;

        preorder(root,s);

        return s;
        
    }

 
    TreeNode* deserialize(string data) {

        vector<string>nodes;
        string temp;

        for(auto& ch:data){
            if(ch==','){
            nodes.push_back(temp);
            temp.clear();
            }

            else
            temp.push_back(ch);
        }
        int idx =0;
        return build(nodes,idx);       
    }
};
