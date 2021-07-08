#include "9cc.h"

Token *token;

int main(int argc, char **argv) {
    if (argc != 2) {
        fprintf(stderr, "引数の個数が正しくありません\n");
        return 1;
    }

    // トークナイズする
    token = tokenize(argv[1]);
    Node *node = expr();
    codegen(node);
    return 0;
}

