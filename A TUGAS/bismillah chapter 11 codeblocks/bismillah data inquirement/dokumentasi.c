
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
