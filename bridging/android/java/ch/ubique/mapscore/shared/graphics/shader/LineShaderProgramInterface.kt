// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from shader.djinni

package ch.ubique.mapscore.shared.graphics.shader

import java.util.concurrent.atomic.AtomicBoolean

abstract class LineShaderProgramInterface {

    abstract fun getRectProgramName(): String

    abstract fun setupRectProgram(context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface)

    abstract fun getPointProgramName(): String

    abstract fun setupPointProgram(context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface)

    abstract fun preRenderRect(context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface)

    abstract fun preRenderPoint(context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface)

    private class CppProxy : LineShaderProgramInterface {
        private val nativeRef: Long
        private val destroyed: AtomicBoolean = AtomicBoolean(false)

        private constructor(nativeRef: Long) {
            if (nativeRef == 0L) error("nativeRef is zero")
            this.nativeRef = nativeRef
        }

        private external fun nativeDestroy(nativeRef: Long)
        fun _djinni_private_destroy() {
            val destroyed = this.destroyed.getAndSet(true)
            if (!destroyed) nativeDestroy(this.nativeRef)
        }
        protected fun finalize() {
            _djinni_private_destroy()
        }

        override fun getRectProgramName(): String {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getRectProgramName(this.nativeRef)
        }
        private external fun native_getRectProgramName(_nativeRef: Long): String

        override fun setupRectProgram(context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setupRectProgram(this.nativeRef, context)
        }
        private external fun native_setupRectProgram(_nativeRef: Long, context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface)

        override fun getPointProgramName(): String {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_getPointProgramName(this.nativeRef)
        }
        private external fun native_getPointProgramName(_nativeRef: Long): String

        override fun setupPointProgram(context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_setupPointProgram(this.nativeRef, context)
        }
        private external fun native_setupPointProgram(_nativeRef: Long, context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface)

        override fun preRenderRect(context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_preRenderRect(this.nativeRef, context)
        }
        private external fun native_preRenderRect(_nativeRef: Long, context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface)

        override fun preRenderPoint(context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_preRenderPoint(this.nativeRef, context)
        }
        private external fun native_preRenderPoint(_nativeRef: Long, context: ch.ubique.mapscore.shared.graphics.RenderingContextInterface)
    }
}
