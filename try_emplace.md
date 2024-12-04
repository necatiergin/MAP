
_std::map::try_emplace_ önce _insert_ edilecek konumu bulur. 
Eğer böyle bir konum bulunursa yani sette anahtar _(key)_ yok ise _value_type_ türünden (yani _key- value pair_) bir nesneyi yerinde (_in place_) oluşturur.<br>
Eğer eklenecek öğe varsa hiç bir şey yapmaz. Yan, _map_'te olan öğeyi değiştirmez.<br>

_If a key equivalent to k already exists in the container, does nothing. Otherwise, behaves like emplace except that the element is constructed as_ <br>

```cpp
value_type(std::piecewise_construct, std::forward_as_tuple(k), std::forward_as_tuple(forward<Args>(args)...))
```

geri dönüş değeri türü : _pair<iterator, bool>_

ekleme (_insertion_) yapılmadığında fonksiyona gönderilen argümanın kaynağı çalınmaz.

