int fun(char x) {
    return x;
}

int foo(int bar) {
    return bar * 2;
}

int main() {
    return fun(foo(2));
}