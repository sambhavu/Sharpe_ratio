sharpe(vector<double> pnl)

{
	double avg, sigma,sum,count;
	double d;
	double sigmasum;
	double val=0;
	int size=pnl.size();	
	for(int i=0; i<=size; i++)
	{ 
		val=pnl[i];
		if(val!=0)
		{
		    sum+=pnl[i];
		    count++;
	     }
	}
	
	for(int j=0; j<=size; j++)
	{
		val=pnl[j];
		if(val!=0)
		{
		    d=(pnl[j]-avg);
		    sigmasum+=d*d;
		}
	}
	
	sigma=sqrt((1/(count-1))*sigmasum);
		
	avg=sum/count;
	cout<<avg;
	
	return (avg)/sigma;
}
