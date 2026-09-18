## Chand Distribution mohem dar C++:

## 1- Distribution yeknavakht Integer Number:
```cpp
    std::uniform_int_distribution<int> dist(1,6);
    // In <int> ham nazari okeye male Template ha hast
```

## 2- Distribution yeknavakht Decimal
```cpp
    std::uniform_real_distribution<double> dist(0.0,2.3);
```

## 3- Distribution bernuli: Output faghat True OR False ast
```cpp
    std::bernoulli_distribution bools;

    // Mitunim ehtemal True shodanesho ziad konim
    std::bernoulli_distribution dist(0.5); // Ehtemal True barabar 0.5
```