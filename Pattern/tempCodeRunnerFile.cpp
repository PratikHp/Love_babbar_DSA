for(int row=0; row<n; row=row+1){
        for(int col=0; col<row+1; col=col+1){
            cout<<row+1;
            if(col != row)//Not a Last char
            {
              cout<<"*";
            }
        }
        cout<<endl;
    } 

    for(int row=0; row<n; row=row+1){
        for(int col=0; col<n-row; col=col+1){
            cout<<n-row;
            if(col != n-row-1)//Not a Last char
            {
              cout<<"*";
            }
        }
        cout<<endl;
    } 