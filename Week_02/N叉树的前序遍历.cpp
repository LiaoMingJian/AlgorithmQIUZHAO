class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        if(!root)   return res;
        stack<Node*> stk;
        stk.push(root);
        while(!stk.empty()){
            Node* tmp = stk.top();
            stk.pop();
            res.push_back(tmp -> val);
            for(int i = tmp -> children.size()-1; i >= 0; --i){
                stk.push(tmp -> children[i]);
            }
        }
        return res;
    }
};


