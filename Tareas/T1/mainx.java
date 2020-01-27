import java.util.Scanner;
public class frijol {
    public static void main(String[] args) {
        Scanner m = new Scanner(System.in);
        String mx = m.nextLine();
        if(mx.equals("")||mx.charAt(0)==' '||mx.charAt(0)=='\t'){
            mx="0";
        }
        int x = Integer.parseInt(mx);//tamaño matriz m*m
        if(!Character.isLetter(mx.charAt(0))){
            if(x<=0){
               System.out.println("El dato es menor o igual que cero, error."); 
            }else{
                int matrix[][]=new int[x][x];
                for (int i = 0; i < x; i++) {
                    //aqui ocurre la magia
                    matrix[i][0]=matrix[i][x-1]=matrix[0][i]=matrix[x-1][i]=1;
                }
                for (int i = 0; i < x; i++) {
                    for (int j = 0; j < x; j++) {
                        System.out.print(matrix[i][j]+" ");
                    }
                    System.out.println(" ");
                }
            }
        }else{
            System.out.println("El dato ingresado es alfanumerico, error.");
        }
    }  
}
