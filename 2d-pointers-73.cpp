#include<iostream>
#include <vector>
using namespace std;

// int main(){
//     int A=1, B=3, C=5, D=2;
    
//     int** ptr = new int***[A];
//     for(int i=0; i<A; ++i){
//         ptr[i] = new int**[B];
//         for(int j=0; j<B; ++j){
//             ptr[i][j] = new int*[C];
//             for(int k=0; k<C; ++k){
//                 ptr[i][j][k] = new int[D];
//             }
//         }
//     }
    
//     for(int i=0; i<A; ++i){
//         for(int j=0; j<B; ++j){
//             for(int k=0; k<C; ++k){
//                 delete[] ptr[i][j][k];
//             }
//             delete[] ptr[i][j];
//         }
//         delete[] ptr[i];
//     }
    
//     delete ptr;
// }

// int main(){
//     int n,m;
//     cin >>n>>m;
    
//     int** ptr = new int*[n];
//     for(int i=0; i<n; i++)
//         ptr[i] = new int[m];
        
    
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//                 cin>>ptr[i][j];
//             }
//     }

//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//                 cout<<ptr[i][j]<<" ";
//             }
//             cout<<endl;
//     }
       
    
//     delete ptr;
// }

int main(){
          int L, N, M;
          cout<<"enter Pointer array size1 : ",cin>>L;
          cout<<"enter rows of the area : ",cin>>N;
          cout<<"enter columns of the area : ",cin>>M;
        //creating 3D array
          int ***arrPtr = new int **[L];
          for (int i = 0; i<L ; i++)
          {
          // 2D array code
                    arrPtr[i] = new int *[N];
                    for (int j = 0; j < N; j++)
                    {
                              arrPtr[i][j]= new int[M];
                    }
          }
          
      for(int i=0; i<L; i++)
        for(int j=0; j<N; j++)
                for(int k=0; k<M;k++)
                arrPtr[i][j][k] = i+j+k;
            
    

   for(int i=0; i<L; i++)
        for(int j=0; j<N; j++){
                for(int k=0; k<M;k++)
                cout<<arrPtr[i][j][k]<<" ";
    cout<<endl;}
    
        // deallocate the heap memory 
        for (int i = 0; i <L; i++)
        {
        //  inside-single arrays deallocate 
                for (int j = 0; j < N; j++)
                {
                            delete[] arrPtr[i][j];
                }
        // single-address-holding arrays deallocate
                delete[] arrPtr[i];
                
        }
        // outermost-address holding array deallocate
        delete[] arrPtr;
                return 0;
}
// int main()
// {
//           int P, Q, C, R;
//           cout << "Enter outer Array size ", cin >> P;
//           cout << "Enter inner Array size ", cin >> Q;
//           cout << "Enter row size: ", cin >> C;
//           cout << "Enter column size: ", cin >> R;
// // creating the 4D array
//           int ****arrPtr = new int ***[P];
//           for (int i = 0; i < P; i++)
//           {
//                     arrPtr[i] = new int **[Q];
//                     for (int j = 0; j < Q; j++)
//                     {
//                               arrPtr[i][j] = new int *[R];
//                               for (int k = 0; k < R; k++)
//                               {
//                                         arrPtr[i][j][k] = new int[C];
//                               }
//                     }
//           }

// // deallocation of 4d array 
// for (int i = 0; i < P; i++)
// {
//           for (int j = 0; j < Q; j++)
//           {
//                     for (int k = 0; k < R; k++)
//                     {
//                               delete[] arrPtr[i][j][k];
//                     }
//                     delete[] arrPtr[i][j];
//           }
//           delete[] arrPtr[i];
// }
// delete[] arrPtr;
//           return 0;
// }