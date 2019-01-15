/**
        * @author: chaitanya-bhojwani
        * @date: 01-01-2019
 **/
import java.util.*;
class permutations{
	public static void main(String args[]){
		System.out.println("---------Daily Codes - Day 10 ---------------");
		System.out.println("---String Permutation Problem---");
		System.out.println("Enter the string for permutations: ");
		Scanner sc = new Scanner(System.in);
		String input = sc.next();
		char[] in = input.toCharArray();
		System.out.println("Possible permutations of String are: ");
		generator("",in);
	}
	static void generator(String prev, char[] in){
		char[] out = new char[in.length];
		for(int i=0;i<in.length;i++){
			out[0] = in[i];
			int k=1;
			for(int j=0;j<in.length;j++){
				if(out[0]!=in[j]){
					out[k] = in[j];
					k++;
				}
			}
			if(out.length>3){
				generator(prev+String.valueOf(out[0]),Arrays.copyOfRange(out, 1, out.length));
			}
			else{
				print_permutation(prev,out);
			}
		}
	}
	static void print_permutation(String prev, char[] permute){
		System.out.println(prev+""+String.valueOf(permute));
		char[] previous = new char[permute.length];
		System.arraycopy(permute,0,previous,0,permute.length);
		for(int p=0;p<permute.length-2;p++){
			char[] next = new char[previous.length];
			next[0] = permute[0];
			for(int q=1;q<permute.length;q++){
				if(q==1){
					next[q] = previous[previous.length-1];
				}
				else{
					next[q] = previous[q-1];
				}
			}
			System.out.println(prev+""+String.valueOf(next));
			System.arraycopy(next,0,previous,0,next.length);
		}
	}
}