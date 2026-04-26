import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;
import java.util.ArrayList;
import java.util.Collections;
import java.util.*;

public class muller {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("#.#", DecimalFormatSymbols.getInstance());
        int n = scn.nextInt();
        String[] inputs = new String[n];
        int[] numeros = new int[n];
        int maximo = 0;
        ArrayList<Integer> lista = new ArrayList<>();
        ArrayList<String> nombres = new ArrayList<>();
        double suma = 0;

        

        for(int i = 0; i<n; i++){
            inputs[i] = scn.next();
            numeros[i] = scn.nextInt();
            scn.nextLine();

            for(int j = 0; j<n; j++){
              
                if(maximo < numeros[j]){
                    maximo = numeros[j];
                }

                
            }

            for(int k = 0; k<n; k++){
              
                if(maximo == numeros[k]){
                    lista.add(lista.size(), k);

                }
            for(int l = 0; l<lista.size(); l++){
                
                nombres.add(inputs[lista.get(l)]);
                Collections.sort(nombres);
                
            }

           

        }

        
            suma += numeros[i];
        
    
         
    }

    System.out.printf("%s %.2f",nombres.get(0), suma/100);


    }
}
