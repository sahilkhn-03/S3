import java.io.*;
import java.util.Scanner;

public class FileReadWriteExample {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Take input for file names and content
        System.out.println("Enter the file name to read from:");
        String inputFileName = scanner.nextLine();

        System.out.println("Enter the file name to write to:");
        String outputFileName = scanner.nextLine();

        try {
            // Reading from the input file
            File inputFile = new File(inputFileName);
            if (!inputFile.exists()) {
                System.out.println("Input file does not exist.");
                return;
            }
            FileReader fileReader = new FileReader(inputFile);
            BufferedReader bufferedReader = new BufferedReader(fileReader);

            // Writing to the output file
            FileWriter fileWriter = new FileWriter(outputFileName);
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

            String line;
            while ((line = bufferedReader.readLine()) != null) {
                bufferedWriter.write(line);
                bufferedWriter.newLine();
            }

            // Close readers and writers
            bufferedReader.close();
            bufferedWriter.close();

            System.out.println("File content successfully copied to " + outputFileName);

        } catch (FileNotFoundException e) {
            System.out.println("File not found: " + e.getMessage());
        } catch (IOException e) {
            System.out.println("An error occurred while reading/writing the file: " + e.getMessage());
        }

        scanner.close();
    }
}
