package com.ramaguru.amrita.cys.jpl.datastructures;

/**
 * The ArrayExample class demonstrates the usage of an array to store and display roll numbers.
 * It creates an array of roll numbers and prints each roll number using a for loop.
 * This class provides a basic example of working with arrays in Java.
 *
 * Usage:
 * - The program creates an array of roll numbers with a specified size.
 * - It assigns roll numbers to array elements.
 * - It uses a for loop to iterate through the array and print each roll number.
 *
 * Note: This example assumes a fixed size for the array and assigns values manually.
 *
 * Dependencies:
 * - None
 *
 * @author Yaswanth Gadamsetti
 * @version 0.5
 */
public class practice1 {
    /**
     * The main method is the entry point of the program.
     * It creates arrays of different data types and prints the elements using different looping techniques.
     *
     * @param args command line arguments
     */
    public static void main(String[] args) {
        // String array
        String[] names = {"John", "Jane", "Alice", "Bob", "Eve"};
        System.out.println("Printing string array :");
        for (String name : names) {
            System.out.println(name);
        }
        System.out.println();

        // Integer array
        int[] numbers = {1, 2, 3, 4, 5};
        System.out.println("Printing integer array :");
        for (int i = 0; i < numbers.length; i++) {
            System.out.println(numbers[i]);
        }
        System.out.println();

        // Double array
        double[] values = {1.1, 2.2, 3.3, 4.4, 5.5};
        System.out.println("Printing double array :");
        for (double value : values) {
            System.out.println(value);
        }
        System.out.println();

        // Char array
        char[] characters = {'A', 'B', 'C', 'D', 'E'};
        System.out.println("Printing char array :");
        int index = 0;
        while (index < characters.length) {
            System.out.println(characters[index]);
            index++;
        }
        System.out.println();
    }
}
