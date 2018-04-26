#include <vector>
#include <iostream>

using namespace std;

int n = 3;
vector<double> a(n*n);
vector<double> b(n*n);

void om(vector<double> matrix) {
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << matrix[i*n+j] << ' ';
		}
		cout << endl;
    }
	cout << endl;
}

vector<double> im() {
	vector<double> result(n*n);
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			result[i*n+j] = i*10+j;
		}
    }
	return result;
}

vector<double> mbn(double a, vector<double> matrix) {
	vector<double> result(n*n);
	 for(int i = 0; i < n*n; i++) {
		 result[i] = a * matrix[i];
	 }
	 return result;
}

vector<double> som(vector<double> a, vector<double> b) {
	vector<double> result(n*n);
	 for(int i = 0; i < n*n; i++) {
		 result[i] = a[i] + b[i];
	 }
	 return result;
}

vector<double> mom(vector<double> a, vector<double> b) {
	vector<double> result(n*n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				result[i*n+j] += a[i*n+k] * b[k*n+j];
			}
		}
	}
	return result;
}

vector<double> tom(vector<double> a) {
	vector<double> result(n*n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			result[i*n+j] = a[j*n+i];
		}
	}
	return result;
}

double det(vector<double> a) {
	double result = 0;
	for (int i = 0; i < n - 1; i++) {

	}
	return result;
}

vector<double> swapRows(vector<double> a, int r1, int r2) {
	vector<double> result(n*n);
	for (int i = 0; i < n*n; i++) {
		result[i] = a[i];
	}
	for (int i = 0; i < n; i++) {
		result[r1*n + i] = a[r2*n + i];
		result[r2*n + i] = a[r1*n + i];
	}
	return result;
}

vector<double> swapCols(vector<double> a, int c1, int c2) {
	vector<double> result(n*n);
	for (int i = 0; i < n*n; i++) {
		result[i] = a[i];
	}
	for (int i = 0; i < n; i++) {
		result[i*n + c1] = a[i*n + c2];
		result[i*n + c2] = a[i*n + c1];
	}
	return result;
}


int main()
{
	a = im();
	om(a);
	om(swapRows(a, 0, 1));
	om(swapCols(a, 0, 1));

	return 0;
}
