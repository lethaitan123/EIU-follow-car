// macros that color and hide UE4 markup that is not valid cpp

// override macros that interfere with definitions.
#define DEPRECATED(...)
#define FORCEINLINE(...)

// use variants of macros defined in ObjectMacros.h that are meant to be active during edit.
#define UCLASS(...)
#define UINTERFACE(...)
#define UPROPERTY(...)
#define UFUNCTION(...)
#define USTRUCT(...)
#define UMETA(...)
#define UPARAM(...)
#define UENUM(...)
#define UDELEGATE(...)

#define GENERATED_BODY_LEGACY(...)
#define GENERATED_BODY(...)
#define GENERATED_USTRUCT_BODY(...)
#define GENERATED_UCLASS_BODY(...)
#define GENERATED_UINTERFACE_BODY(...)
#define GENERATED_IINTERFACE_BODY(...)

// specifiers missing from ObjectMacros.h
namespace UC
{
	enum
	{
		DependsOn,
		meta,
	};
}
namespace UF
{
	enum
	{
		BlueprintImplementableEvent,
		BlueprintNativeEvent,
		meta,
	};
}
namespace UI
{
	enum
	{
		BlueprintType,
		DependsOn,
		MinimalAPI,
		meta,
	};
}
namespace UP
{
	enum
	{
		EditInline,
		Native,
		NoExport,
		RepRetry,
		SerializeText,
		meta,
	};
}
namespace US
{
	enum
	{
	};
}

// UCLASS meta specifiers
namespace UM_UC
{
	enum
	{
		BlueprintSpawnableComponent,
		BlueprintThreadSafe,
		ChildCannotTick,
		ChildCanTick,
		DeprecatedNode,
		DeprecationMessage,
		DisplayName,
		DontUseGenericSpawnObject,
		ExposedAsyncProxy,
		IgnoreCategoryKeywordsInSubclasses,
		IsBlueprintBase,
		KismetHideOverrides,
		ProhibitedInterfaces,
		RestrictedToClasses,
		ShortToolTip,
		ShowWorldContextPin,
		ToolTip,
		UsesHierarchy,
	};
}

// UFUNCTION meta specifiers
namespace UM_UF
{
	enum
	{
		AdvancedDisplay,
		ArrayParm,
		ArrayTypeDependentParams,
		AutoCreateRefTerm,
		BlueprintAutocast,
		BlueprintInternalUseOnly,
		BlueprintProtected,
		CallableWithoutWorldContext,
		CommutativeAssociativeBinaryOperator,
		CompactNodeTitle,
		CustomStructureParam,
		DefaultToSelf,
		DeprecatedFunction,
		DeprecationMessage,
		DisplayName,
		ExpandEnumAsExecs,
		HidePin,
		HideSpawnParms,
		Keywords,
		Latent,
		LatentInfo,
		MaterialParameterCollectionFunction,
		NativeBreakFunc,
		NativeMakeFunc,
		NotBlueprintThreadSafe,
		ShortToolTip,
		ToolTip,
		UnsafeDuringActorConstruction,
		WorldContext,
	};
}

// UINTERFACE meta specifiers
namespace UM_UI
{
	enum
	{
		CannotImplementInterfaceInBlueprint,
	};
}

// UPROPERTY meta specifiers
namespace UM_UP
{
	enum
	{
		AllowAbstract,
		AllowedClasses,
		AllowPreserveRatio,
		AlwaysAsPin,
		ArrayClamp,
		AssetBundles,
		Bitmask,
		BitmaskEnum,
		BlueprintBaseOnly,
		BlueprintCompilerGeneratedDefaults,
		ClampMax,
		ClampMin,
		ConfigHierarchyEditable,
		ContentDir,
		CustomizeProperty,
		DisplayName,
		DisplayThumbnail,
		EditCondition,
		EditFixedOrder,
		ExactClass,
		ExposeFunctionCategories,
		ExposeOnSpawn,
		FilePathFilter,
		FixedIncrement,
		HideAlphaChannel,
		HideViewOptions,
		InlineEditConditionToggle,
		LongPackageName,
		MakeEditWidget,
		MakeStructureDefaultValue,
		MetaClass,
		MultiLine,
		Multiple,
		MustImplement,
		NeverAsPin,
		NoElementDuplicate,
		NoResetToDefault,
		NoSpinbox,
		OnlyPlaceable,
		OverridingInputProperty,
		PasswordField,
		PinHiddenByDefault,
		PinShownByDefault,
		RelativePath,
		RelativeToGameContentDir,
		RequiredInput,
		ShowOnlyInnerProperties,
		ShowTreeView,
		SliderExponent,
		UIMax,
		UIMin,
	};
}

// USTRUCT meta specifiers
namespace UM_US
{
	enum
	{
		HasNativeBreak,
		HasNativeMake,
		HiddenByDefault,
		ShortToolTip,
		ToolTip,
	};
}

// UPARAM meta specifiers
namespace UM_UR
{
	enum
	{
	};
}

// UENUM meta specifiers
namespace UM_UE
{
	enum
	{
		Bitflags,
	};
}

// UPARAM specifiers
namespace Z0_UE4_UPARAM_SPECIFIERS
{
	enum
	{
		const,
		DisplayName,
		meta,
		NotReplicated,
		ref,
	};
}

// UENUM specifiers
namespace Z0_UE4_UENUM_SPECIFIERS
{
	enum
	{
		BlueprintType,
		Category,
		meta,
	};
}

// UMETA specifiers
namespace Z0_UE4_UMETA_SPECIFIERS
{
	enum
	{
		DisplayName,
		DisplayValue,
		//Grouping,
		Hidden,
		ToolTip,
		//TraceQuery,
	};
}


// helps ranged for loop iterate across TMap
template<class KeyType, class ValueType>
class TTuple
{
public:
	KeyType Key;
	ValueType Value;
};

// so that for ranged-loop works correctly when TTuple key is a pointer
// the iterator is still returning the TTuple, not the pointer key
template<typename ContainerType, typename ElementType, typename IndexType>
class TIndexedContainerIterator
{
	ElementType operator* () const;
};

template<class ElementType, class _A>
class TArray
{
public:
	// iterator movement
	typedef TIndexedContainerIterator<ElementType, ElementType> iterator;
	typedef TIndexedContainerIterator<ElementType, ElementType> const_iterator;
	typedef TIndexedContainerIterator<ElementType, ElementType> reverse_iterator;
	typedef TIndexedContainerIterator<ElementType, ElementType> const_reverse_iterator;

	// iterator access
	iterator begin();
	iterator end();
	const_iterator cbegin() const;
	const_iterator cend() const;
	reverse_iterator rbegin();
	reverse_iterator rend();
	const_reverse_iterator crbegin() const;
	const_reverse_iterator crend() const;

public:
	// data access
	ElementType& operator[](int32 Index);
};

template<class ElementType, class _A>
class TArrayView
{
public:
	// iterator movement
	typedef TIndexedContainerIterator<ElementType, ElementType> iterator;
	iterator begin();
	iterator end();
};

template<class ElementType, class _A>
class TChunkedArray
{
public:
	// iterator movement
	typedef TIndexedContainerIterator<ElementType, ElementType> iterator;
	iterator begin();
	iterator end();
};

template <class ElementType>
class TDoubleLinkedList
{
public:
	// iterator movement
	typedef TIndexedContainerIterator<ElementType, ElementType> iterator;
	iterator begin();
	iterator end();
};

template<typename ElementType, typename Allocator>
class TIndirectArray
{
public:
	// iterator movement
	typedef TIndexedContainerIterator<ElementType, ElementType> iterator;
	iterator begin();
	iterator end();

public:
	// data access
	ElementType& operator[](int32 Index);
};

template<typename ElementType>
class TLinkedList
{
public:
	// iterator movement
	typedef TIndexedContainerIterator<ElementType, ElementType> iterator;
	iterator begin();
	iterator end();
};

template<class KeyType, class ValueType, class _A, class _S>
class TMap
{
public:
	// required since the member TIterator class has a different pair API
	// uses functions not exposed members, unlike the STL style iterator below
	// BUT also overloads -> to access Key and Value as members
	template<class KeyType, class ValueType>
	class TIterator
	{
		KeyType Key();
		ValueType Value();
		TTuple<KeyType, ValueType> operator->() const;
	}
	TMap::TIterator<KeyType, ValueType> CreateIterator();
	TMap::TIterator<KeyType, ValueType> CreateConstIterator() const;
	TMap::TIterator<KeyType, ValueType> CreateKeyIterator(KeyType InKey);
	TMap::TIterator<KeyType, ValueType> CreateConstKeyIterator(KeyType InKey) const;

public:
	// STL style iterator movement - ranged for loop
	typedef TBaseIterator<TTuple<KeyType, ValueType> > iterator;
	iterator begin();
	iterator end();
};

template<typename ElementType, typename KeyFuncs, typename Allocator>
class TSet
{
public:
	// iterator movement
	typedef TIndexedContainerIterator<ElementType, ElementType> iterator;
	iterator begin();
	iterator end();
};

template<class KeyType, class ValueType, class _A, class _S>
class TSortedMap
{
public:
	// required since the member TIterator class has a different pair API
	// uses functions not exposed members, unlike the STL style iterator below
	template<class KeyType, class ValueType>
	class TIterator
	{
		KeyType Key();
		ValueType Value();
		void RemoveCurrent();
	}
	TSortedMap::TIterator<KeyType, ValueType> CreateIterator();
	TSortedMap::TIterator<KeyType, ValueType> CreateConstIterator() const;
	TSortedMap::TIterator<KeyType, ValueType> CreateKeyIterator(KeyType InKey);
	TSortedMap::TIterator<KeyType, ValueType> CreateConstKeyIterator(KeyType InKey) const;

public:
	// STL style iterator movement - ranged for loop
	typedef TIndexedContainerIterator<TTuple<KeyType, ValueType>, TTuple<KeyType, ValueType> > iterator;
	iterator begin();
	iterator end();
};
