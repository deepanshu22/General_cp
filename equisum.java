package june30;

public class equisum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
         int []arr = {10,20,30,40,50,60,70};
         printequisets(arr,0,"",0,"",0);
	}
	public static void printequisets(int[]arr,int vidx,String set1, int sos1,String set2,int sos2)
	{
		if(vidx==arr.length)
		{
			if(sos1==sos2)
			{
				System.out.println(set1 + " " + set2);
			}
			return;
		}
		printequisets(arr,vidx+1,set1 +arr[vidx],sos1 +arr[vidx],set2,sos2);
		printequisets(arr,vidx+1,set1,sos1 ,set2+arr[vidx],sos2+arr[vidx]);
		
		
	}

}
