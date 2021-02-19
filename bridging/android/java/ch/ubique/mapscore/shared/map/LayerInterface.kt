// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

package ch.ubique.mapscore.shared.map

import java.util.concurrent.atomic.AtomicBoolean

abstract class LayerInterface {

    abstract fun update()

    abstract fun buildRenderPasses(): ArrayList<ch.ubique.mapscore.shared.graphics.RenderPassInterface>

    abstract fun onAdded(mapInterface: MapInterface)

    abstract fun onRemoved()

    abstract fun pause()

    abstract fun resume()

    abstract fun hide()

    abstract fun show()

    private class CppProxy : LayerInterface {
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

        override fun update() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_update(this.nativeRef)
        }
        private external fun native_update(_nativeRef: Long)

        override fun buildRenderPasses(): ArrayList<ch.ubique.mapscore.shared.graphics.RenderPassInterface> {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            return native_buildRenderPasses(this.nativeRef)
        }
        private external fun native_buildRenderPasses(_nativeRef: Long): ArrayList<ch.ubique.mapscore.shared.graphics.RenderPassInterface>

        override fun onAdded(mapInterface: MapInterface) {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_onAdded(this.nativeRef, mapInterface)
        }
        private external fun native_onAdded(_nativeRef: Long, mapInterface: MapInterface)

        override fun onRemoved() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_onRemoved(this.nativeRef)
        }
        private external fun native_onRemoved(_nativeRef: Long)

        override fun pause() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_pause(this.nativeRef)
        }
        private external fun native_pause(_nativeRef: Long)

        override fun resume() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_resume(this.nativeRef)
        }
        private external fun native_resume(_nativeRef: Long)

        override fun hide() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_hide(this.nativeRef)
        }
        private external fun native_hide(_nativeRef: Long)

        override fun show() {
            assert(!this.destroyed.get()) { error("trying to use a destroyed object") }
            native_show(this.nativeRef)
        }
        private external fun native_show(_nativeRef: Long)
    }
}