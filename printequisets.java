package coursepractise;

import java.util.ArrayList;

public class printequisets {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int[]arr = {10,20,30,40,50};
//		printeqsets(arr,0,"",0,"",0);
//		printeqsetsarlist(arr,0,new ArrayList<>(),0,new ArrayList<>(),0);
		printtargetset(arr,0,new ArrayList<>(),0,50);

	}
	private static void printeqsets(int[]arr,int vidx,String set1,int sos1,String set2,int sos2)
	{
		if(vidx==arr.length)
		{
			if(sos1==sos2)
			{
				System.out.println(set1 + " " + set2);
			}
			return;
		}
		    printeqsets(arr,vidx+1,set1 + arr[vidx],sos1 + arr[vidx],set2,sos2);
		    printeqsets(arr,vidx+1,set1,sos1,set2 + arr[vidx],sos2 +arr[vidx]);
	}
    private static void printeqsetsarlist(int[]arr,int vidx,ArrayList<Integer>set1,int sos1,ArrayList<Integer>set2,int sos2){
 
    	if(vidx==arr.length)
		{
			if(sos1==sos2)
			{
				System.out.println(set1 + " " + set2);
			}
			return;
		}  	
    	 set1.add(arr[vidx]);
    	 printeqsetsarlist(arr,vidx+1,set1,sos1 + arr[vidx],set2,sos2);
//    	 set1.remove((Object)arr[vidx]);
    	 set1.remove(set1.size()-1);
    	 set2.add(arr[vidx]);
    	 printeqsetsarlist(arr,vidx+1,set1,sos1,set2,sos2 +arr[vidx]);
//    	 set2.remove((Object)arr[vidx]);
    	 set2.remove(set2.size()-1);	
   }
    private static void printtargetset(int[]arr,int vidx,ArrayList<Integer> set,int sum ,int tar)
    {
    	if(vidx==arr.length)
    	{
    		if(sum==tar)
    		{
    			System.out.println(set);
    		}
    		return;    		
    	}
    	printtargetset(arr,vidx+1,set,sum,tar);
    	set.add(arr[vidx]);
    	printtargetset(arr,vidx+1,set,sum+ arr[vidx],tar);
    	set.remove(set.size()-1);
    }   
}
