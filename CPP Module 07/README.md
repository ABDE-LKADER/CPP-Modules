## Templates in c++

# What Is A Template Function Or Class? > Template is a compile-time code generation.
  **Geniric Form: generate concrete version for specific type when need it.**

# NB: Templates are not functions. They are instructions to generate functions or classes at compile time.
  **This Is What A Template Is, finished**

>> EXAMPLE:
```cpp
	template <typename T>
	T	add(T a, T b) { return a + b; }
```

>> Like You Say To The Compiler Here is my instructions to create add() function.

# Why We Use Template:
>> Write code once that work with any type & Avoid duplicate of code
>> Achieve type safety STL USE IT.

# How Template Works:
>> FIRST: Template Code Not compiled immediately.
>> SECOND: Compiler wait for instantiation **used for template code**.
>> THIRD: Generate a real code from the template **type-specific**.

# Memory OPT:
>> No extra memory usage.
>> Code duplicated for type specified.
>> Eash Instantiation have it's own memory layout.
>> low-level control.

# Summuries:
>> Template: Blueprint to generate code for any type.
>> Instantiation: When compiler create real code for spesific type.
>> Specialization: Writing a custom version for one specific type.
>> Static typing: Templates are checked at compile time.

# Template Types:
>> Function Template.
>> Class Template.
>> Template with Multiple type parameters.
>> Template with Non-type parameters.
>> Template Specialization.
>> Partial specialization (for class templates)
>> Template template parameters
