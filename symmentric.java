import java.util.*;
public class Main{
public static void main(String[] args) {
   int[][] a={
       {1,0,4},
       {0,5,3},
       {4,3,5}
   };
   
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           if(a[i][j]!=a[j][i]){
               System.out.print("Not Symmetric");
               return;
           }
       }
   }
   System.out.print("Symmetric");
   
 
}
}
