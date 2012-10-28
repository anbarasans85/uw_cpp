void swap_ptr(int *ptr_n1,int *ptr_n2)
{
	int temp;
	temp=*ptr_n1;
	*ptr_n1=*ptr_n2;
	*ptr_n2=temp;

	return;
}

void swap_ref(int &ref_n1,int &ref_n2)
{
	int temp;
	temp=ref_n1;
	ref_n1=ref_n2;
	ref_n2=temp;
	
	return;
}
