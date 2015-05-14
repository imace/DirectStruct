/* It had generated by DirectStruct v1.4.2 */
#include "IDL_BankXmlTransaction.dsc.h"

int DSCINIT_BankXmlTransaction( BankXmlTransaction *pst )
{
	int	index[10] = { 0 } ; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(BankXmlTransaction) );
	pst->version = 1 ;
		pst->ResponseHeader.response_code = 0 ;
		strcpy( pst->ResponseHeader.response_desc , "OK" );
				for( index[3] = 0 ; index[3] < 3 ; index[3]++ )
				{
				pst->QueryTransactionDetails.AddonMessages._AddonMessage_size = 3 ;
				}
				for( index[3] = 0 ; index[3] < 10 ; index[3]++ )
				{
				pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_size = 10 ;
				}
	return 0;
}

#include "fasterxml.h"

int DSCSERIALIZE_XML_BankXmlTransaction( BankXmlTransaction *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"<?xml version=\"1.0\" encoding=\"%s\"?>\n",encoding); if(len<0)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<BankXmlTransaction>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<version>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->version); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</version>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<ResponseHeader>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		<transaction_code>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ResponseHeader.transaction_code); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</transaction_code>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		<trans_jnlsno>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->ResponseHeader.trans_jnlsno); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</trans_jnlsno>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		<response_code>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->ResponseHeader.response_code); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</response_code>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		<response_desc>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ResponseHeader.response_desc); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</response_desc>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	</ResponseHeader>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	<QueryTransactionDetails>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		<AddonMessages>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
					for( index[3] = 0 ; index[3]<pst->QueryTransactionDetails.AddonMessages._AddonMessage_count ; index[3]++ )
					{
	len=SNPRINTF(buf,remain_len,"			<AddonMessage>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				<message_text>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</message_text>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			</AddonMessage>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
					}
	len=SNPRINTF(buf,remain_len,"		</AddonMessages>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		<TransactionDetailTitle>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			<title_text>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetailTitle.title_text); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</title_text>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			<page_no>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%hd",pst->QueryTransactionDetails.TransactionDetailTitle.page_no); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</page_no>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			<page_size>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%hd",pst->QueryTransactionDetails.TransactionDetailTitle.page_size); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</page_size>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		</TransactionDetailTitle>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"		<TransactionDetails>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
					for( index[3] = 0 ; index[3]<pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count ; index[3]++ )
					{
	len=SNPRINTF(buf,remain_len,"			<TransactionDetail>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				<trans_date>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</trans_date>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				<trans_time>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</trans_time>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				<outlet_id>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</outlet_id>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				<card_no>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</card_no>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"				<trans_amount>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%f",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</trans_amount>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"			</TransactionDetail>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
					}
	len=SNPRINTF(buf,remain_len,"		</TransactionDetails>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	</QueryTransactionDetails>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"</BankXmlTransaction>\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	
	if( p_len ) (*p_len) = (*p_len) - remain_len ;
	
	return 0;
}

int DSCSERIALIZE_XML_COMPACT_BankXmlTransaction( BankXmlTransaction *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	remain_len = (*p_len) ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"<?xml version=\"1.0\" encoding=\"%s\"?>",encoding); if(len<0)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<BankXmlTransaction>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<version>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->version); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</version>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<ResponseHeader>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<transaction_code>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ResponseHeader.transaction_code); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</transaction_code>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<trans_jnlsno>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->ResponseHeader.trans_jnlsno); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</trans_jnlsno>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<response_code>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->ResponseHeader.response_code); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</response_code>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<response_desc>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->ResponseHeader.response_desc); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</response_desc>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"</ResponseHeader>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<QueryTransactionDetails>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<AddonMessages>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
					for( index[3] = 0 ; index[3]<pst->QueryTransactionDetails.AddonMessages._AddonMessage_count ; index[3]++ )
					{
	len=SNPRINTF(buf,remain_len,"<AddonMessage>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<message_text>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.AddonMessages.AddonMessage[index[3]].message_text); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</message_text>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"</AddonMessage>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
				}
	len=SNPRINTF(buf,remain_len,"</AddonMessages>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<TransactionDetailTitle>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<title_text>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetailTitle.title_text); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</title_text>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<page_no>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%hd",pst->QueryTransactionDetails.TransactionDetailTitle.page_no); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</page_no>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<page_size>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%hd",pst->QueryTransactionDetails.TransactionDetailTitle.page_size); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</page_size>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"</TransactionDetailTitle>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<TransactionDetails>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
					for( index[3] = 0 ; index[3]<pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count ; index[3]++ )
					{
	len=SNPRINTF(buf,remain_len,"<TransactionDetail>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<trans_date>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_date); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</trans_date>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<trans_time>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_time); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</trans_time>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<outlet_id>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].outlet_id); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</outlet_id>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<card_no>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%s",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].card_no); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</card_no>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"<trans_amount>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%f",pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[index[3]].trans_amount); XMLESCAPE_EXPAND(buf,len,remain_len); if(len<0||remain_len<len)return -1;
	len=SNPRINTF(buf,remain_len,"</trans_amount>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"</TransactionDetail>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
				}
	len=SNPRINTF(buf,remain_len,"</TransactionDetails>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"</QueryTransactionDetails>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"</BankXmlTransaction>"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	
	if( p_len ) (*p_len) = (*p_len) - remain_len ;
	
	return 0;
}

funcCallbackOnXmlNode CallbackOnXmlNode_BankXmlTransaction ;
int CallbackOnXmlNode_BankXmlTransaction( int type , char *xpath , int xpath_len , int xpath_size , char *node , int node_len , char *properties , int properties_len , char *content , int content_len , void *p )
{
	BankXmlTransaction	*pst = (BankXmlTransaction*)p ;
	int	index[10] = { 0 } ; index[0] = 0 ;
	
	if( type & FASTERXML_NODE_BRANCH )
	{
		if( type & FASTERXML_NODE_ENTER )
		{
				if( xpath_len == 70 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/AddonMessages/AddonMessage" , xpath_len ) == 0 )
				{if( pst->QueryTransactionDetails.AddonMessages._AddonMessage_count > 3 ) return -8;}
				if( xpath_len == 80 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail" , xpath_len ) == 0 )
				{if( pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count > 10 ) return -8;}
		}
		else if( type & FASTERXML_NODE_LEAVE )
		{
				if( xpath_len == 70 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/AddonMessages/AddonMessage" , xpath_len ) == 0 )
				{pst->QueryTransactionDetails.AddonMessages._AddonMessage_count++;}
				if( xpath_len == 80 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail" , xpath_len ) == 0 )
				{pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count++;}
		}
	}
	else if( type & FASTERXML_NODE_LEAF )
	{
		/* version */
		if( xpath_len == 27 && strncmp( xpath , "/BankXmlTransaction/version" , xpath_len ) == 0 )
		{NATOC(content,content_len,pst->version);}
			/* transaction_code */
			if( xpath_len == 51 && strncmp( xpath , "/BankXmlTransaction/ResponseHeader/transaction_code" , xpath_len ) == 0 )
			{XMLUNESCAPE_FOLD(content,content_len,pst->ResponseHeader.transaction_code);
			{if( content_len > sizeof(pst->ResponseHeader.transaction_code)-1 ) return -7;}}
			/* trans_jnlsno */
			if( xpath_len == 47 && strncmp( xpath , "/BankXmlTransaction/ResponseHeader/trans_jnlsno" , xpath_len ) == 0 )
			{NATOI(content,content_len,pst->ResponseHeader.trans_jnlsno);}
			/* response_code */
			if( xpath_len == 48 && strncmp( xpath , "/BankXmlTransaction/ResponseHeader/response_code" , xpath_len ) == 0 )
			{NATOI(content,content_len,pst->ResponseHeader.response_code);}
			/* response_desc */
			if( xpath_len == 48 && strncmp( xpath , "/BankXmlTransaction/ResponseHeader/response_desc" , xpath_len ) == 0 )
			{XMLUNESCAPE_FOLD(content,content_len,pst->ResponseHeader.response_desc);
			{if( content_len > sizeof(pst->ResponseHeader.response_desc)-1 ) return -7;}}
					/* message_text */
					if( xpath_len == 83 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/AddonMessages/AddonMessage/message_text" , xpath_len ) == 0 )
					{XMLUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.AddonMessages.AddonMessage[pst->QueryTransactionDetails.AddonMessages._AddonMessage_count].message_text);
					{if( content_len > sizeof(pst->QueryTransactionDetails.AddonMessages.AddonMessage[pst->QueryTransactionDetails.AddonMessages._AddonMessage_count].message_text)-1 ) return -7;}}
				/* title_text */
				if( xpath_len == 77 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetailTitle/title_text" , xpath_len ) == 0 )
				{XMLUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetailTitle.title_text);
				{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetailTitle.title_text)-1 ) return -7;}}
				/* page_no */
				if( xpath_len == 74 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetailTitle/page_no" , xpath_len ) == 0 )
				{NATOS(content,content_len,pst->QueryTransactionDetails.TransactionDetailTitle.page_no);}
				/* page_size */
				if( xpath_len == 76 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetailTitle/page_size" , xpath_len ) == 0 )
				{NATOS(content,content_len,pst->QueryTransactionDetails.TransactionDetailTitle.page_size);}
					/* trans_date */
					if( xpath_len == 91 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/trans_date" , xpath_len ) == 0 )
					{XMLUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_date);
					{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_date)-1 ) return -7;}}
					/* trans_time */
					if( xpath_len == 91 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/trans_time" , xpath_len ) == 0 )
					{XMLUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_time);
					{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_time)-1 ) return -7;}}
					/* outlet_id */
					if( xpath_len == 90 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/outlet_id" , xpath_len ) == 0 )
					{XMLUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].outlet_id);
					{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].outlet_id)-1 ) return -7;}}
					/* card_no */
					if( xpath_len == 88 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/card_no" , xpath_len ) == 0 )
					{XMLUNESCAPE_FOLD(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].card_no);
					{if( content_len > sizeof(pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].card_no)-1 ) return -7;}}
					/* trans_amount */
					if( xpath_len == 93 && strncmp( xpath , "/BankXmlTransaction/QueryTransactionDetails/TransactionDetails/TransactionDetail/trans_amount" , xpath_len ) == 0 )
					{NATOF(content,content_len,pst->QueryTransactionDetails.TransactionDetails.TransactionDetail[pst->QueryTransactionDetails.TransactionDetails._TransactionDetail_count].trans_amount);}
	}
	
	return 0;
}

int DSCDESERIALIZE_XML_BankXmlTransaction( char *encoding , char *buf , int *p_len , BankXmlTransaction *pst )
{
	char	xpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( xpath , 0x00 , sizeof(xpath) );
	nret = TravelXmlBuffer( buf , xpath , sizeof(xpath) , & CallbackOnXmlNode_BankXmlTransaction , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}

int DSCDESERIALIZE_XML_COMPACT_BankXmlTransaction( char *encoding , char *buf , int *p_len , BankXmlTransaction *pst )
{
	char	xpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( xpath , 0x00 , sizeof(xpath) );
	nret = TravelXmlBuffer( buf , xpath , sizeof(xpath) , & CallbackOnXmlNode_BankXmlTransaction , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}
