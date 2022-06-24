import java.util.Scanner;
public class Duplicate {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int size = sc.nextInt();
        int[] arr = new int[size];
        System.out.println("Enter the elements of the array");
        for(int i=0;i<size;i++) {
            arr[i] = sc.nextInt();
        }
        int count = 0;
        for(int i=0;i<size;i++) {
            for(int j=i+1;j<size;j++) {
                if(arr[i]==arr[j]) {
                    count++;
                }
            }
        }
        if(count>0) {
            System.out.println("Duplicate number is present in the array");
        }
        else {
            System.out.println("Duplicate number is not present in the array");
        }
    }
}