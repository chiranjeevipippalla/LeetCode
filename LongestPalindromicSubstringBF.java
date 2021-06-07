import java.util.ArrayList;
import java.util.HashMap;

class Main 
{
  //to check if the string is a palindrome or not
  public static boolean isPalindrome(String s)
  {
    int start = 0;
    int end = s.length() - 1;

    while(start <= end)
    {
      if(s.charAt(start) != s.charAt(end))
      {
        return false;
      }
      start++;
      end--;
    }
    return true;
  }
  
  public static void main(String args[]) 
  { 
    String s = "babad";
    ArrayList<String> list = new ArrayList<>();
    HashMap<String, Integer> map = new HashMap<>();

    //adding all the substrings into a list
    for(int i=0; i<s.length(); i++)
    {
      for(int j=i; j<=s.length(); j++)
      {
        list.add(s.substring(i, j));
      }
    }

    //checking if the strings in the list are palindrome or not
    //if they are palindromic strings, add them to a hashmap with the string and the length of the string
    for(int i=0; i<list.size(); i++)
    {
      String str = list.get(i);
      if(isPalindrome(str))
      {
        map.put(str, str.length());
      }
    }

    //finding the length of the longest substring in the hashmap
    int max = 0;
    for(String s1: map.keySet())
    {
      if(map.get(s1) > max)
      {
        max = map.get(s1);
      }
    }

    //printing the substrings from the hashmap with their length equals to length of longest palindrome substring from hashmap
    for(String s2: map.keySet())
    {
      if(map.get(s2) == max)
      {
        System.out.println(s2);
      }
    }
  }

}
