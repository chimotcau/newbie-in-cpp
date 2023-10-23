#include<iostream>

int main(){
    std::string books[][3]={{"thep","sat","nhom"},
                            {"hoa","la","canh"},
                            {"canon","fujifilm","sony"}};

    int rows= sizeof(books)/sizeof(books[0]);            //book[0] is row number 0 : "thep","sat","nhom"
    int columns = sizeof(books[0])/sizeof(books[0][0]);  //book[0] is row number 0 : "thep","sat","nhom"

    for( int i=0; i<rows;i++){                           // We use the nested loop to print the 2d array
        for (int j=0;j<columns;j++){
            std::cout<<books[i][j]<<" ";
        }
        std::cout<<'\n';
    }                      
                                     


    return 0;
}