import java.io.*;
import java.util.Scanner;

public class FileStreamExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the input file name to read from:");
        String inputFileName = scanner.nextLine();

        System.out.println("Enter the output file name to write to:");
        String outputFileName = scanner.nextLine();

        FileInputStream inputStream = null;
        FileOutputStream outputStream = null;

        try {
    
            inputStream = new FileInputStream(inputFileName);
            outputStream = new FileOutputStream(outputFileName);
            int byteData;
            while ((byteData = inputStream.read()) != -1) {
                outputStream.write(byteData);
            }

            System.out.println("File copied successfully from " + inputFileName + " to " + outputFileName);

        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("An error occurred while reading/writing the file: " + e.getMessage());
        } finally {
            // Close the streams to release system resources
            try {
                if (inputStream != null) {
                    inputStream.close();
                }
                if (outputStream != null) {
                    outputStream.close();
                }
            } catch (IOException e) {
                System.out.println("Error closing streams: " + e.getMessage());
            }
        }

        scanner.close();
    }
}
