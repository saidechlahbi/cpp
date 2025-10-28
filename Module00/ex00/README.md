# Casting in C++


Do you want to convert between types?
│
├─ YES, and they're related (numeric, class hierarchy)
│  └─ Use: static_cast ✅
│
├─ YES, and you need to remove const/volatile
│  └─ Use: const_cast ⚠️ (Think twice!)
│
├─ YES, and they're completely unrelated (pointers ↔ int)
│  └─ Use: reinterpret_cast 🔴 (Design problem?)
│
└─ YES, and it's downcasting in polymorphic hierarchy
   └─ Use: dynamic_cast ✅