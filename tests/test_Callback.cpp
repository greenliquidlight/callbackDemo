extern "C" {
    #include <CallbackDemo.h>


    int main(int argc, char* argv[])
    {
            if (argc < 2) {
                printf("Missing test case argument.\n");
                return 1;
            }

            int testCase = atoi(argv[1]);

            // Set the callback function based on the test case
            if (testCase == 1) {
                setCallback(&printNumberInDec);
            } else if (testCase == 2) {
                setCallback(&printNumberInHex);
            } else {
                printf("Invalid test case.\n");
                return 1;
            }

            // Call the callback function
            callbackFunction(10);

            return 0;
    }
}