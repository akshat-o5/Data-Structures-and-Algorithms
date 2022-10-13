
class maxSubArray {

	static int[] maxCrossingSum(int arr[], int l, int m,
			int h) {
		int sum = 0;
		int left_sum = Integer.MIN_VALUE;
		int left = m;
		for (int i = m; i >= l; i--) {
			sum = sum + arr[i];
			if (sum > left_sum)
				left_sum = sum;
			left = i;
		}

		sum = 0;
		int right_sum = Integer.MIN_VALUE;
		int right = m;
		for (int i = m; i < h; i++) {
			sum = sum + arr[i];
			if (sum > right_sum)
				right_sum = sum;
			right = i;
		}

		
		int cross_sum = left_sum + right_sum - arr[m];
		int[] result;
		if (cross_sum > left_sum && cross_sum > right_sum) {
			result=new int[]{cross_sum, left, right};
		}
		else if(left_sum >cross_sum && left_sum > right_sum){
			result = new int[]{left_sum, left, m};
		}
		else{
			result = new int[]{right_sum, m, right};
		}

		return result;
	}

	static int[] maxSubArraySum(int arr[], int l, int h) {
		if (l > h) {
			int[] result = { Integer.MIN_VALUE, 0, 0 };
			return result;
		}
		if (l == h) {
			int[] result = { arr[l], 0, 0 };
			return result;
		}

		int m = (l + h) / 2;
		int[] result;
		int[] left = maxSubArraySum(arr, l, m - 1);
		int[] right = maxSubArraySum(arr, m + 1, h);
		int[] cross = maxCrossingSum(arr, l, m, h);

		if (left[0] > right[0] && left[0] > cross[0]) {
			result = left;

		} else if (cross[0] > left[0] && cross[0] > right[0]) {
			result = cross;
		} else {
			result = right;
		}

		return result;
	}

	public static void main(String[] args) {
		int arr[] = { 0, -8, 1, 3, -3 };
		int n = arr.length;
		int[] max_sum = maxSubArraySum(arr, 0, n - 1);

		System.out.println("Maximum contiguous sum is "
				+ max_sum[0] + " " + max_sum[1] + " " + max_sum[2]);
	}
}
