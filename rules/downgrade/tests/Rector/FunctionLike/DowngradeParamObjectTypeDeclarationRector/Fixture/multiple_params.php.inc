<?php

namespace Rector\Downgrade\Tests\Rector\FunctionLike\DowngradeParamObjectTypeDeclarationRector\Fixture;

class MultipleParams
{
    public function someFunction(object $someObject, string $someOtherVar)
    {
    }
}

?>
-----
<?php

namespace Rector\Downgrade\Tests\Rector\FunctionLike\DowngradeParamObjectTypeDeclarationRector\Fixture;

class MultipleParams
{
    /**
     * @param object $someObject
     */
    public function someFunction($someObject, string $someOtherVar)
    {
    }
}

?>
