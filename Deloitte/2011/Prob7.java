package deloitteProject;
import java.util.Scanner;


public class Prob7 {

	public static String isPalindrome(int i, String test)
	{
		String tempString = test.substring(i, test.length() - 1);
		char[] tempArray = tempString.toCharArray();
		String tempy = "";
		String currentPalin = "";
		int count = 0;
		for (int j = tempString.length(); j > 0; j--)
		{
			tempy = tempString.substring(i, j);
			tempArray = tempy.toCharArray();
			String temp = "";
			count++;
			System.out.println(count);
			for (int k = tempArray.length - 1; k >= 0; k--)
			{
				temp += tempArray[k];
			}
			if (temp.equalsIgnoreCase(tempString) && temp.length() >= 3)
				return currentPalin;

		}
		return "";
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String input, temp, temp1, temp2;
		String[] inputArray;
		char[] tempArray;
		while (in.hasNext())
		{
			temp1 = "";
			input = in.nextLine();
			inputArray = input.split(" ");
			for (String test: inputArray)
			{
				temp = "";
				temp1 += test;
				tempArray = test.toCharArray();
				String tempString = "";
				String currentPalin = "";
				for (int i = 0; i < tempArray.length - 1; i++)
				{
					currentPalin = isPalindrome(i, test);
				}
				if (currentPalin.length() != 0)
					System.out.println(currentPalin);
			}
			temp2 = "";
			String tempString = "";
			String currentPalin = "";
			for (int i = 0; i < temp1.length(); i++)
			{
				currentPalin = isPalindrome(i, temp1);
			}
			if (currentPalin.length() != 0)
				System.out.println(currentPalin);
		}
	}

}
