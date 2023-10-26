#pragma once

namespace sdk {
class AActor;

class UActorComponent : public UObject {
public:
    static UClass* static_class();

    AActor* get_owner();
    void destroy_component();
};
}