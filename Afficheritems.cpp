void afficheritemsDansindex(int index) {
         int h = HashFunc(index);
         while (t[h] != NULL && t[h]->index != index) {
            h = HashFunc(h + 1);
         }
         if (t[h] == NULL)
            cout<<"la valeur n'existe pas !!!  "
         else
            cout<<"la valeur de votre Clée est :  "<<t[h]->v<<endl;
            
      }
