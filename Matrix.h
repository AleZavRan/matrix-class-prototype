#pragma once

namespace uiuc{

    class Matrix{

        private:
            int rows_;
            int columns_;

        public:
            Matrix();
            Matrix(int rows, int columns);
            int getRows();
            int getColumns();
            void setSize(int rows, int columns);
            void setMatrix(int rows, int columns, float mat[][]);
    };
}
