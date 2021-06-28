//Input P3Q4R2
//Output PPPQQQQRR

class Occurences{
 private void findOccurences(String str){
  
  int[] occurrences = new int[str.length()];
	
    for(int i = 0; i < str.length(); i+=2)
	  occurrences[i] = Integer.parseInt(String.valueOf(str.charAt(i + 1)));
	 
	  for(int i = 0; i < str.length(); i++)
	      for(int j = 0; j < occurrences[i]; j++)
            System.out.print(str.charAt(i) + " ");
            
 }    
public static void main(String[] args){
      Occurences occurrences = new Occurences();
      occurrences.findOccurences("P3Q4R2");
}
}
