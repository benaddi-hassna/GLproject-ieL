int nbreItems(int index) {
         int h = HashFunc(k);
         int count;
         while (t[h] != NULL && t[h]->index != index) {
            h = HashFunc(h + 1);
         }
         if (t[h] == NULL)
            return -1;
         else{
            while (t[v] !=NULL){
              t[v] -> v+1;
              count ++;
            }
         }
      }
