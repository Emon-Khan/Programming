int startPoint = 0;
        int endPoint = x;
        int halfPoint;
        while (startPoint <= endPoint) {
            halfPoint = (startPoint + endPoint) / 2;
            if (halfPoint * halfPoint < x) {
                startPoint = halfPoint + 1;
            } else if (halfPoint * halfPoint > x) {
                endPoint = halfPoint - 1;
            } else {
                endPoint = halfPoint;
                break;
            }
        }
        System.out.println(endPoint);