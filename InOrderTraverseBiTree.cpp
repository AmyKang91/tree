void InOrderTraverseBiTree(BiNode *root){
     stacjk s; BiNode *p = root;
     while(p||!s.empty()){
          if(p){s.push(p);p = p->left;}
          else{p = s.top(); visit(p); p.pop(); p= p->right;}
     }
}
