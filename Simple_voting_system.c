#include <stdio.h>
#include <unistd.h>

int main()
{
    int pass;
    int n = -1;
    int sumit = 0;
    int rahul = 0;
    int raj = 0;

    while (n != 0)
    {
        printf("\n🗳️ Voting Menu\n");
        printf("1️⃣  Press 1 for Rahul\n");
        printf("2️⃣  Press 2 for Sumit\n");
        printf("3️⃣  Press 3 for Raj\n");
        printf("📊  Press 4 to view vote counts\n");
        printf("🏆  Press 5 to view the winner\n");
        printf("🚪  Press 0 to Exit\n");
        printf("➡️  Enter your choice: ");

        scanf("%d", &n);
        printf("\n");

        switch (n)
        {
        case 1:
            rahul++;
            printf("🟢 Vote casted to Rahul!\n");
            break;

        case 2:
            sumit++;
            printf("🟢 Vote casted to Sumit!\n");
            break;

        case 3:
            raj++;
            printf("🟢 Vote casted to Raj!\n");
            break;

        case 4:
            printf("📊 Vote Counts:\n");
            printf("🧑‍💼 Raj: %d\n", raj);
            printf("🧑‍💼 Sumit: %d\n", sumit);
            printf("🧑‍💼 Rahul: %d\n\n", rahul);
            break;

        case 5:
            while (pass != 5599)
            {
                printf("🔐 Enter admin password: ");
                scanf("%d", &pass);

                if (pass == 5599)
                {
                    printf("\n⏳ Calculating results");
                    for (int i = 5; i > 0; i--)
                    {
                        printf("...%d", i);
                        fflush(stdout);
                        sleep(1);
                    }
                    printf("\n");

                    printf("🏁 Result:\n");
                    if (raj > sumit && raj > rahul)
                        printf("🏆 Raj is the winner!\n");
                    else if (sumit > raj && sumit > rahul)
                        printf("🏆 Sumit is the winner!\n");
                    else if (rahul > sumit && rahul > raj)
                        printf("🏆 Rahul is the winner!\n");
                    else
                        printf("⚠️  No clear winner (tie).\n");

                    n = 0;
                    break;
                }
                else
                {
                    printf("❌ Incorrect password! Try again.\n\n");
                }
            }
            break;

        case 0:
            printf("👋 Exiting the voting system. Goodbye!\n");
            break;

        default:
            printf("⚠️  Invalid choice! Please try again.\n");
            break;
        }
    }

    return 0;
}
