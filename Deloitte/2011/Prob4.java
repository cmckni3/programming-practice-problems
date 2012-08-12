package deloitteProject;
import java.util.*;
public class Prob4 {

	public static String countNumbers(String line)
	{
		char[] nums = line.toCharArray();
		int previous = 0, count = 0;
		StringBuilder output = new StringBuilder();
		for (int j = 0; j < nums.length; j++)
		{
			int i = nums[j] - '0';
			//System.out.println("blah");
			if (previous == 0)
			{
				previous = i;
				count++;
				//System.out.println("b1 " + previous + " " + count);
			}
			else if (previous == i)
			{
				count++;
				//System.out.println("b2 " + count);
			}
			else
			{
				output.append(count + "" + previous);
				previous = i;
				count = 1;
				//System.out.println("b3 " + previous + " " + count + " " + output.toString());
			}
			if ((j + 1) == nums.length)
			{
				output.append(count + "" + previous);
				//System.out.println("b4 " + previous + " " + count + " " + output.toString());
			}
		}
		return output.toString();
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String[] line = new String[16];
		int i = 0;
		while (i < 16)
		{
			if (i == 0)
				line[0] = "11";
			else
				line[i] = countNumbers(line[i - 1]);
			i++;
		}
		while (in.hasNext())
		{
			String blah = in.next();
			String[] intArray = blah.split(";");
			for (String blah2: intArray)
			{
				int number = Integer.parseInt(blah2);
				int length = line[number - 1].length();
				for (int j = 0; j < number; j++)
				{
					int space = (length - line[j].length())/2;
					for (int k = 0; k < space; k++)
						System.out.print(" ");
					System.out.println(line[j]);
				}
			}
		}
	}

}
