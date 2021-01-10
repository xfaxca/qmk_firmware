// Unicode mappings for greek characters
enum unicode_names {
    U_ALPHA,
    U_BETA,
    U_GAMMA,
    U_DELTA,
    U_EPSILON,
    U_ETA,
    U_THETA,
    U_KAPPA,
    U_LAMBDA,
    U_MU,
    U_NU,
    U_XI,
    U_PI,
    U_RHO,
    U_SIGMA,
    U_TAU,
    U_PHI,
    U_CHI,
    U_PSI,
    U_OMEGA,
    BANG,
    IRONY,
    SNEK
};

const uint32_t PROGMEM unicode_map[] = {
    [U_ALPHA] = 0x3B1,  // alpha 
    [U_BETA] = 0x3B2,
    [U_GAMMA] = 0x3B3,
    [U_DELTA] = 0x3B4,
    [U_EPSILON] = 0x3B5,
    [U_ETA] = 0x3B7,
    [U_THETA] = 0x3B8,
    [U_KAPPA] = 0x3BA,
    [U_LAMBDA] = 0x3BB,
    [U_MU] = 0x3BC,
    [U_NU] = 0x3BD,
    [U_XI] = 0x3BE,
    [U_PI] = 0x3C0,
    [U_RHO] = 0x3C1,
    [U_SIGMA] = 0x3C3,
    [U_TAU] = 0x3C4,
    [U_PHI] = 0x3C6,
    [U_CHI] = 0x3C7,
    [U_PSI] = 0x3C8,
    [U_OMEGA] = 0x3C9,
    [BANG]  = 0x203D,  // ‽
    [IRONY] = 0x2E2E,  // ⸮
    [SNEK]  = 0x1F40D, // 🐍
};


/**
 * Example of layer (xlay) with unicode characters (with #include <unicode_map.h> in keymap)
 * [3] = LAYOUT_ortho_5x12(KC_BSLS, KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
							KC_BSLS, KC_N, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_NO,
							KC_TRNS, X(U_ALPHA), X(U_BETA), X(U_GAMMA), X(U_DELTA), X(U_EPSILON), X(U_ETA), KC_MINS, KC_PLUS, KC_LBRC, KC_RBRC, KC_NO,
							KC_TRNS, X(U_THETA), X(U_KAPPA), X(U_MU), X(U_NU), X(U_XI), X(U_PI), KC_ASTR, KC_SLSH, KC_LPRN, KC_RPRN, KC_NO, 
							KC_TRNS, X(U_SIGMA), X(U_TAU), X(U_PI), X(U_GAMMA), X(U_CHI), X(U_PSI), X(U_OMEGA), KC_NO, KC_NO, KC_NO, KC_NO),
 * */