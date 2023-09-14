/* Dimodifikasi oleh:
Nrp: 5025201090
Nama: luthifyyah hanifah amari
*/

/* Tanggal:
Pembuatan: 3 januari 2021

*/

/* Problem: Idenifikasi program apa yang akan diselesaikan */
/*
		Periphs Plus is a mail-order computer supply company that maintains its inventory
	as a computer file in order to facilitate answering questions regarding that database.
	Some questions of interest might be:
	# What printer stands that cost less than $100 are available?
	# What product has the code 5241?
	# What types of data cartridges are available?
	These questions and others can be answered if we know the correct way to ask
	them.
*/

/*Analysis: Berisi analisa bagaimana cara menyelesaikan problem yang ada */
/*
A database inquiry program has two phases: Setting the search parameters and
searching for records that satisfy the parameters. In our program, we will assume
that all the structure components can be involved in the search. The program user
must enter low and high bounds for each field of interest. Let’s illustrate how we
might set the search parameters to answer the question, “What modems that cost
less than $200 are available?”
Assuming that the price of any Periphs Plus product does not exceed $1,000, we
can use the following menu-driven dialogue to set the search parameters.
Select by letter a search parameter to set, or enter q to
accept parameters shown.
 Search Parameter Current Value
[a] Low bound for stock number 1111
[b] High bound for stock number 9999
[c] Low bound for category aaaa
[d] High bound for category zzzz
[e] Low bound for technical description aaaa
[f] High bound for technical description zzzz
[g] Low bound for price $ 0.00
[h] High bound for price $1000.00
Selection> c
New low bound for category> modem
Select by letter a search parameter to set, or enter q to accept
parameters shown.
 Search Parameter Current Value
[a] Low bound for stock number 1111
[b] High bound for stock number 9999
[c] Low bound for category modem
[d] High bound for category zzzz
[e] Low bound for technical description aaaa
[f] High bound for technical description zzzz
[g] Low bound for price $ 0.00
[h] High bound for price $1000.00

Selection> d


New high bound for category> modem
Select by letter a search parameter to set, or enter q to accept
parameters shown.
 Search Parameter Current Value
[a] Low bound for stock number 1111
[b] High bound for stock number 9999
[c] Low bound for category modem
[d] High bound for category modem
[e] Low bound for technical description aaaa
[f] High bound for technical description zzzz
[g] Low bound for price $ 0.00
[h] High bound for price $1000.00

Selection> h


New high bound for price> 199.99
Select by letter a search parameter to set, or enter q to accept
parameters shown.
 Search Parameter Current Value
[a] Low bound for stock number 1111
[b] High bound for stock number 9999
[c] Low bound for category modem
[d] High bound for category modem
[e] Low bound for technical description aaaa
[f] High bound for technical description zzzz
[g] Low bound for price $ 0.00
[h] High bound for price $ 199.99

Selection> q
*/

/* Data Requirements : Menjelaskan data-data apa saja yang diperlukan untuk menyelesaikan problem */

//Problem Inputs:
//	search_params_t params; /* search parameter bounds */
//	char inv_filename[STR_SIZ] /* name of inventory file */

//Problem Outputs:
//All products that satisfy the search.

/*DESIGN
Initial Algorithm
1. Open inventory file.
2. Get search parameters.
3. Display all products that satisfy the search parameters.
The structure chart for the database inquiry problem is shown in Fig. 11.4. The
refinement of this design is distributed through the development of functions
get_params and display_match.


/*IMPLEMENTATION

In main function (in Fig. 11.5 at book), we see an outline of the database program’s implementation including the full code of function main. Our design and implementation of the functions
called by main and most of their helper functions follow this outline.

Design of the Function Subprograms
Function get_params must first initialize the search parameters to allow the widest
search possible and then let the user change some parameters to narrow the search. The
local variables and algorithm for get_params follow; the structure chart is in Fig. 11.6 (at the book).

Local Variables for get_params
search_params_t params; /* structure whose components
 must be defined */
//char choice; /* user's response to menu */

