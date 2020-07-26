class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> res;
        if(!root)   return res;
        stack<Node*> stk;
        stk.push(root);
        while(!stk.empty()){
            Node* tmp = stk.top();
            stk.pop();
            res.push_back(tmp -> val);
            for(auto i : tmp -> children){
                stk.push(i);
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};


