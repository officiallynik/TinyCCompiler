int arr[5];
for (int i = 0; i < 5; i++)
{
    arr[i] = 5 - i;
}
for (int i = 0; i < 4; i = i + 1)
{
    for (int j = 0; j < 4 - i; j++)
    {
        int k = j + 1;
        if (arr[j] > arr[k])
        {
            int temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
        }
    }
}

print("Sorted Array\n");

for (int i = 0; i < 5; i++)
{
    print(arr[i], "\n");
}
