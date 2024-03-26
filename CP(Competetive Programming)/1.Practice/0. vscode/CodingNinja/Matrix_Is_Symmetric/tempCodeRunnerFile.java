int flag = 0;
        int len = matrix.length;
        for (int i = 0; i < len; i++) {
            for (int j = i + 1; j < len - 1; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    flag++;
                    break;
                }
            }
        }
        if (flag == 1) {
            return false;
        }
        return true;