/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.mycompany.premier_java;
import java.util.Scanner;
/**
 *
 * @author ntessier
 */
public class HelloWorld {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        int multiplicateur;
        Scanner scan = new Scanner(System.in);
      
            System.out.println("Donner le multiplicateur");
        multiplicateur=scan.nextInt();
        for(int i=1;i<11;i++){
            System.out.println(i+" x "+multiplicateur+" = "+(i*multiplicateur));
        }
        
        
    }
    
}
