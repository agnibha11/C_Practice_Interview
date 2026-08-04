uint32_t clearRange(uint32_t n, int i, int j) {
    uint32_t left  = (j >= 31) ? 0u : (~0u << (j + 1));
    uint32_t right = (1u << i) - 1;
    return n & (left | right);
}