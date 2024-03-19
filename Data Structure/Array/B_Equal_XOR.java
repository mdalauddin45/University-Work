using System;
using System.Collections.Generic;

public class Solution {
    public static void Main() {
        int t = int.Parse(Console.ReadLine());
        for (int i = 0; i < t; i++) {
            string[] input1 = Console.ReadLine().Split();
            int n = int.Parse(input1[0]);
            int k = int.Parse(input1[1]);
            int[] a = Console.ReadLine().Split().Select(int.Parse).ToArray();
            
            HashSet<int> set = new HashSet<int>(a);
            List<int> l = new List<int>();
            List<int> r = new List<int>();
            int count = 0;

            for (int j = 1; j <= n && count < 2 * k; j++) {
                if (set.Contains(j) && set.Contains(n + j)) {
                    l.Add(j);
                    r.Add(n + j);
                    count += 2;
                } else if (set.Contains(j) && count < k) {
                    l.Add(j);
                    count++;
                }
            }

            Console.WriteLine(string.Join(" ", l));
            Console.WriteLine(string.Join(" ", r));
        }
    }
}
