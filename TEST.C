#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <ATM_operations.h>
#define PROJECT_NAME    "ATM"

//Functions



void test_moneyDeposit(void);
void test_moneyWithdraw(void);



/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
 
  
  CU_add_test(suite, "moneyDeposit", test_moneyDeposit);
  CU_add_test(suite, "moneyWithdraw", test_moneyWithdraw);
  
  


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}


/* Write all the test functions */ 



void test_moneyDeposit(void)
{

    CU_ASSERT(3000== moneyDeposit(1500))
    
	/* Dummy fail*/
    CU_ASSERT (2400==moneyDeposite(1500))
    
}//money deposit

void test_moneyWithdraw(void)
{
    CU_ASSERT(0== moneyWithdraw(1500))
    
	/* Dummy fail*/
    CU_ASSERT (1500==moneyWithdraw(1500))
    
    
}//money withdraw

