class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int k=0;
	    int []myarr1 = {1,2,3,5,8,9,10};
	    int []myarr2 = {9,56,74,3,6,2,10};
	    int []myarr3 = new int[10];
	    for(int i=0;i<myarr1.length;i++){
	        for(int j=0;j<myarr2.length;j++){
	           if(myarr1[i]==myarr2[j]){
                  myarr3[k] = myarr1[i];
                   k++;
	           }
	        }
	    }
	    for(int p=0;p<k;p++){
	      System.out.println(myarr3[p]);
	    }
	}
}